/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class _CFXPreferences, __CFPrefsWeakObservers;

@interface CFPrefsSource : NSObject {

	_CFXPreferences* _containingPreferences;
	CFDictionaryRef _dict;
	__CFPrefsWeakObservers* _observers;
	Aq _generationCount;
	AAI* shmemEntry;
	AI lastKnownShmemState;
	os_unfair_lock_s _lock;
	BOOL _isSearchList;

}
-(BOOL)isDirectModeEnabled;
-(id)initWithContainingPreferences:(id)arg1 ;
-(void*)alreadylocked_copyValueForKey:(CFStringRef)arg1 ;
-(CFDictionaryRef)copyDictionary;
-(void)setValue:(void*)arg1 forKey:(CFStringRef)arg2 from:(id)arg3 ;
-(void)setAccessRestricted:(BOOL)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 removeValuesForKeys:(const _CFString*)arg5 count:(long long)arg6 from:(id)arg7 ;
-(BOOL)isByHost;
-(void)setFileProtectionClass:(int)arg1 ;
-(id)createRequestNewContentMessageForDaemon:(int)arg1 ;
-(long long)alreadylocked_generationCount;
-(BOOL)isVolatile;
-(CFArrayRef)alreadylocked_copyKeyList;
-(void)setConfigurationPath:(CFStringRef)arg1 ;
-(void)setBackupDisabled:(BOOL)arg1 ;
-(void)setValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 copyValues:(BOOL)arg4 from:(id)arg5 ;
-(void)mergeIntoDictionary:(CFDictionaryRef)arg1 sourceDictionary:(CFDictionaryRef)arg2 cloudKeyEvaluator:(/*^block*/id)arg3 ;
-(int)alreadylocked_removePreferencesObserver:(id)arg1 ;
-(CFStringRef)copyOSLogDescription;
-(void)lock;
-(CFStringRef)userIdentifier;
-(id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int*)arg2 ;
-(int)alreadylocked_addPreferencesObserver:(id)arg1 ;
-(CFDictionaryRef)alreadylocked_copyDictionary;
-(CFStringRef)domainIdentifier;
-(void)unlock;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)dealloc;
-(void)alreadylocked_setPrecopiedValues:(const void*)arg1 forKeys:(const _CFString*)arg2 count:(long long)arg3 from:(id)arg4 ;
-(void)alreadylocked_clearCache;
-(BOOL)managed;
-(void)fullCloudSynchronizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)transitionIntoDirectModeIfNeededWithRetryBlock:(/*^block*/id)arg1 ;
-(long long)generationCount;
-(CFArrayRef)copyKeyList;
-(void)setDaemonCacheEnabled:(BOOL)arg1 ;
-(void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5 ;
-(void*)copyValueForKey:(CFStringRef)arg1 ;
-(int)alreadylocked_updateObservingRemoteChanges;
-(BOOL)synchronize;
-(CFStringRef)container;
-(id)description;
@end

