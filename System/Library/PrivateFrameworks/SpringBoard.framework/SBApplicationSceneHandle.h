/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBSceneHandle.h>

@class SBApplication, NSString, NSHashTable;

@interface SBApplicationSceneHandle : SBSceneHandle {

	SBApplication* _application;
	NSString* _persistenceIdentifier;
	BOOL _isSecure;
	NSHashTable* _sceneUpdateContributers;
	unsigned long long _userLaunchSignpostID;
	double _userLaunchEventTime;
	long long _layoutRole;

}

@property (nonatomic,readonly) SBApplication * application;                   //@synthesize application=_application - In the implementation block
@property (nonatomic,readonly) NSString * persistenceIdentifier;              //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                   //@synthesize isSecure=_isSecure - In the implementation block
@property (assign,nonatomic) long long layoutRole;                            //@synthesize layoutRole=_layoutRole - In the implementation block
+(id)lookupOrCreatePersistenceIDFromApplication:(id)arg1 sceneID:(id)arg2 ;
-(id)_createApplicationSceneTransitionContextFromContext:(id)arg1 entity:(id)arg2 ;
-(id)_createApplicationSceneSettingsFromContext:(id)arg1 entity:(id)arg2 ;
-(void)addSceneUpdateContributer:(id)arg1 ;
-(void)_modifyApplicationSceneSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(id)_createParametersFromTransitionContext:(id)arg1 entity:(id)arg2 ;
-(SBApplication *)application;
-(id)_initWithApplication:(id)arg1 sceneDefinition:(id)arg2 displayIdentity:(id)arg3 ;
-(void)_modifyApplicationSceneClientSettings:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 initialSceneSettings:(id)arg4 ;
-(void)setLayoutRole:(long long)arg1 ;
-(id)_persistenceIdentifier;
-(id)_initWithDefinition:(id)arg1 ;
-(void)_modifyApplicationTransitionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(void)_applicationsDidChange:(id)arg1 ;
-(id)_initWithApplication:(id)arg1 scene:(id)arg2 displayIdentity:(id)arg3 ;
-(id)newSceneViewController;
-(void)_commonInitWithApplication:(id)arg1 sceneIdentifier:(id)arg2 displayIdentity:(id)arg3 ;
-(id)_createProcessExecutionContextFromContext:(id)arg1 entity:(id)arg2 ;
-(id)newScenePlaceholderContentContextWithActivationSettings:(id)arg1 ;
-(id)newSceneViewWithReferenceSize:(CGSize)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 ;
-(void)_modifyProcessExecutionContext:(id)arg1 fromRequestContext:(id)arg2 entity:(id)arg3 ;
-(NSString *)persistenceIdentifier;
-(id)displayItemRepresentation;
-(id)_createApplicationSceneClientSettingsFromContext:(id)arg1 entity:(id)arg2 initialSceneSettings:(id)arg3 ;
-(void)removeSceneUpdateContributer:(id)arg1 ;
-(id)_initWithScene:(id)arg1 ;
-(BOOL)isSecure;
-(void)dealloc;
-(long long)layoutRole;
@end

