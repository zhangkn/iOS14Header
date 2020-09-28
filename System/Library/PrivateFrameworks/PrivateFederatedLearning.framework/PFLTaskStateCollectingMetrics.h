/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:01 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFLTaskState.h>

@class NSURL, NSArray;

@interface PFLTaskStateCollectingMetrics : NSObject <PFLTaskState> {

	NSURL* _compiledModelURL;
	NSArray* _validationIndicies;
	NSArray* _trainingIndicies;

}

@property (nonatomic,readonly) NSURL * compiledModelURL;                  //@synthesize compiledModelURL=_compiledModelURL - In the implementation block
@property (nonatomic,readonly) NSArray * validationIndicies;              //@synthesize validationIndicies=_validationIndicies - In the implementation block
@property (nonatomic,readonly) NSArray * trainingIndicies;                //@synthesize trainingIndicies=_trainingIndicies - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)tag;
-(void)suspend;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)resume:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)compiledModelURL;
-(id)initWithCompiledModelURL:(id)arg1 validationDataIndicies:(id)arg2 trainingDataIndicies:(id)arg3 ;
-(NSArray *)validationIndicies;
-(NSArray *)trainingIndicies;
@end
