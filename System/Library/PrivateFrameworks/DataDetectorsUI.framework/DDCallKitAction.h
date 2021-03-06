/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DDCallAction.h>

@class TUCallProvider;

@interface DDCallKitAction : DDCallAction {

	TUCallProvider* _callProvider;

}

@property (retain) TUCallProvider * callProvider;              //@synthesize callProvider=_callProvider - In the implementation block
+(BOOL)hostApplicationIsEntitled;
+(id)callKitProviders;
-(id)localizedName;
-(long long)TTYType;
-(TUCallProvider *)callProvider;
-(id)dialRequest;
-(void)setCallProvider:(TUCallProvider *)arg1 ;
@end

