/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HMITaskService.h>

@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService {

	VCPHomeKitAnalysisService* _remote;

}

@property (readonly) VCPHomeKitAnalysisService * remote;              //@synthesize remote=_remote - In the implementation block
+(id)logCategory;
-(VCPHomeKitAnalysisService *)remote;
-(BOOL)cancelTask:(int)arg1 ;
-(int)submitTaskWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
@end
