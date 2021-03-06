/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>

@class HDProfile, ACHTemplateStore, NSDictionary, NSString;

@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver> {

	HDProfile* _profile;
	ACHTemplateStore* _templateStore;
	/*^block*/id _readTemplatesBlock;
	NSDictionary* _injectedKeyValuePairs;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                           //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;              //@synthesize templateStore=_templateStore - In the implementation block
@property (nonatomic,copy) id readTemplatesBlock;                                  //@synthesize readTemplatesBlock=_readTemplatesBlock - In the implementation block
@property (nonatomic,retain) NSDictionary * injectedKeyValuePairs;                 //@synthesize injectedKeyValuePairs=_injectedKeyValuePairs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(HDProfile *)profile;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)arg1 ;
-(BOOL)_readAndSaveBackCompatDefinitions;
-(NSDictionary *)injectedKeyValuePairs;
-(id)_definitionsFromKeyValuePairs:(id)arg1 ;
-(id)readTemplatesBlock;
-(id)initWithProfile:(id)arg1 templateStore:(id)arg2 ;
-(void)setReadTemplatesBlock:(id)arg1 ;
-(void)setInjectedKeyValuePairs:(NSDictionary *)arg1 ;
@end

