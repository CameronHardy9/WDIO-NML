'use strict';

const { Eyes, 
  Configuration, 
  BatchInfo,
  FileLogHandler,
  ClassicRunner} = require('@applitools/eyes-webdriverio');


describe('WDIO-NML', function () {

  let batch;
  let runner;
  let config;
  let eyes;


  before(async () => {

    runner = new ClassicRunner();
    batch = new BatchInfo('WDIO-NML');

    config = new Configuration();

    config.setBatch(batch);
  });
  
  
  beforeEach(async function () {

    eyes = new Eyes(runner);

    eyes.setConfiguration(config);
    eyes.setLogHandler(new FileLogHandler(true, './eyes.log', false))
    
    await eyes.open(driver, 'WDIO-NML', 'WDIO-NML');

  });
  
  it('WDIO-NML', async () => {

    await eyes.check();

  });
  
  afterEach(async () => {

    await eyes.closeAsync();
  });
  
  after(async () => {

    const allTestResults = await runner.getAllTestResults();
    console.log(allTestResults);
  });
  
});
