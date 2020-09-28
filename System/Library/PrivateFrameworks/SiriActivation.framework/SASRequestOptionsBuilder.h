/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASSystemState;

@interface SASRequestOptionsBuilder : NSObject {

	SASSystemState* _systemState;
	long long _presentationIdentifier;

}

@property (nonatomic,retain) SASSystemState * systemState;                  //@synthesize systemState=_systemState - In the implementation block
@property (assign,nonatomic) long long presentationIdentifier;              //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
-(void)setSystemState:(SASSystemState *)arg1 ;
-(BOOL)_siriIsEnabled;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(long long)presentationIdentifier;
-(SASSystemState *)systemState;
-(id)_createRequestOptionsForRequest:(id)arg1 withDataSource:(id)arg2 ;
-(id)buildOptionsWithRequest:(id)arg1 presentationIdentifier:(long long)arg2 dataSource:(id)arg3 ;
@end
