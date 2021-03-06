/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface IDSSignInControllerAccountDescription : NSObject {

	NSString* _serviceName;
	NSNumber* _state;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSNumber * state;                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(void)setState:(NSNumber *)arg1 ;
-(id)completion;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSNumber *)state;
@end

