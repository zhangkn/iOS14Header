/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SBSLockScreenContentAction.h>

@class SBApplicationSceneEntity;

@interface SBInProcessSecureAppAction : SBSLockScreenContentAction {

	SBApplicationSceneEntity* _applicationSceneEntity;

}

@property (nonatomic,retain) SBApplicationSceneEntity * applicationSceneEntity;              //@synthesize applicationSceneEntity=_applicationSceneEntity - In the implementation block
-(SBApplicationSceneEntity *)applicationSceneEntity;
-(id)initWithType:(unsigned long long)arg1 applicationSceneEntity:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)isInProcessAction;
-(void)setApplicationSceneEntity:(SBApplicationSceneEntity *)arg1 ;
@end

