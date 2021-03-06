/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPCloudController, MPCloudServiceStatusController, MPModelObject, ICUserIdentity;

@interface MPLibraryAddStatusObserver : NSObject {

	BOOL _needsStatusUpdate;
	MPCloudController* _cloudController;
	MPCloudServiceStatusController* _cloudServiceStatusController;
	MPLibraryAddStatusObserverConfiguration _configuration;
	long long _currentStatus;
	/*^block*/id _statusBlock;
	MPModelObject* _identifyingModelObject;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) ICUserIdentity * userIdentity;                                      //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,readonly) long long currentStatus;                                            //@synthesize currentStatus=_currentStatus - In the implementation block
@property (nonatomic,copy) id statusBlock;                                                         //@synthesize statusBlock=_statusBlock - In the implementation block
@property (nonatomic,readonly) MPLibraryAddStatusObserverConfiguration configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) MPModelObject * identifyingModelObject;                             //@synthesize identifyingModelObject=_identifyingModelObject - In the implementation block
-(id)initWithUserIdentity:(id)arg1 ;
-(ICUserIdentity *)userIdentity;
-(void)_allowsExplicitContentDidChangeNotification:(id)arg1 ;
-(void)_updateCurrentStatus;
-(id)statusBlock;
-(void)setConfiguration:(MPLibraryAddStatusObserverConfiguration)arg1 identifyingModelObject:(id)arg2 ;
-(void)_updateInProgressDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(long long)currentStatus;
-(void)setStatusBlock:(id)arg1 ;
-(void)_transientStateDidChangeNotification:(id)arg1 ;
-(id)init;
-(long long)_calculateCurrentStatus;
-(void)configureWithModelObject:(id)arg1 ;
-(void)_cloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(MPModelObject *)identifyingModelObject;
-(MPLibraryAddStatusObserverConfiguration)configuration;
-(void)_subscriptionStatusDidChangeNotification:(id)arg1 ;
@end

