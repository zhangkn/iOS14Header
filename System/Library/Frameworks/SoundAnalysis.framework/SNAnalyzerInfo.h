/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNAnalyzerCreating, SNProcessing;
@class SNAnalyzerHost, NSError;

@interface SNAnalyzerInfo : NSObject {

	BOOL _configured;
	id<SNAnalyzerCreating> _request;
	/*^block*/id _resultsHandler;
	/*^block*/id _completionHandler;
	SNAnalyzerHost* _analyzerHost;
	id<SNProcessing> _sharedProcessor;
	NSError* _configurationError;

}

@property (nonatomic,retain) id<SNAnalyzerCreating> request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id resultsHandler;                               //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) SNAnalyzerHost * analyzerHost;                 //@synthesize analyzerHost=_analyzerHost - In the implementation block
@property (nonatomic,retain) id<SNProcessing> sharedProcessor;              //@synthesize sharedProcessor=_sharedProcessor - In the implementation block
@property (assign,nonatomic) BOOL configured;                               //@synthesize configured=_configured - In the implementation block
@property (nonatomic,retain) NSError * configurationError;                  //@synthesize configurationError=_configurationError - In the implementation block
-(void)setConfigured:(BOOL)arg1 ;
-(void)setResultsHandler:(id)arg1 ;
-(id<SNAnalyzerCreating>)request;
-(id)resultsHandler;
-(void)setRequest:(id<SNAnalyzerCreating>)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)configured;
-(id)completionHandler;
-(SNAnalyzerHost *)analyzerHost;
-(void)setAnalyzerHost:(SNAnalyzerHost *)arg1 ;
-(id<SNProcessing>)sharedProcessor;
-(void)setSharedProcessor:(id<SNProcessing>)arg1 ;
-(NSError *)configurationError;
-(void)setConfigurationError:(NSError *)arg1 ;
@end

