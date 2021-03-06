/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks/Snappy.framework/Snappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestRunFactory.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface SNTestStore : NSObject <SNTestRunFactory> {

	NSMutableArray* _testSuites;
	NSMutableDictionary* _testCases;

}

@property (nonatomic,readonly) NSMutableArray * testSuites;                  //@synthesize testSuites=_testSuites - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * testCases;              //@synthesize testCases=_testCases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addTestCase:(id)arg1 ;
-(void)addTestSuite:(id)arg1 ;
-(NSMutableArray *)testSuites;
-(NSMutableDictionary *)testCases;
-(id)testRunForTestName:(id)arg1 ;
@end

