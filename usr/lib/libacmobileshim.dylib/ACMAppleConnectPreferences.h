/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMPreferences.h>
#import <libobjc.A.dylib/ACMAppleConnectPreferences.h>
@class NSString;


@protocol ACMAppleConnectPreferences <ACMBasePreferences>
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) BOOL shouldRememberPasswordInKeychain; 
@required
+(id)preferencesWithStore:(id)arg1;
-(void)setLogLevel:(int)arg1;
-(id)UUID;
-(void)clearCache;
-(void)setUUID:(id)arg1;
-(int)logLevel;
-(id)environmentPreferencesWithRealm:(id)arg1;
-(id)allValuesWithOptions:(long long)arg1;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2;
-(void)savePreferencesIfNeeded;
-(BOOL)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(BOOL)arg1;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(long long)arg1;
-(NSString *)recentUserName;
-(void)setRecentUserName:(id)arg1;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(id)arg1;
-(BOOL)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(BOOL)arg1;
-(id)principalPreferencesWithPrincipal:(id)arg1;
-(void)cleanupOnMemoryWarning;

@end


@class NSString, NSMutableDictionary;

@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences> {

	NSMutableDictionary* _environmentsContainer;

}

@property (retain,readonly) NSMutableDictionary * environmentsContainer;              //@synthesize environmentsContainer=_environmentsContainer - In the implementation block
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) BOOL shouldRememberPasswordInKeychain; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferencesWithStore:(id)arg1 ;
-(void)setLogLevel:(int)arg1 ;
-(id)UUID;
-(void)dealloc;
-(void)clearCache;
-(void)setUUID:(id)arg1 ;
-(int)logLevel;
-(id)environmentPreferencesWithRealm:(id)arg1 ;
-(id)allValuesWithOptions:(long long)arg1 ;
-(void)replaceAllValues:(id)arg1 withOptions:(long long)arg2 ;
-(void)savePreferencesIfNeeded;
-(id)initWithPreferencesStore:(id)arg1 ;
-(NSMutableDictionary *)environmentsContainer;
-(BOOL)runsOn64BitsDevice;
-(void)setRunsOn64BitsDevice:(BOOL)arg1 ;
-(void)purgeAllValues;
-(void)purgeAllValuesWithOptions:(long long)arg1 ;
-(NSString *)recentUserName;
-(void)setRecentUserName:(NSString *)arg1 ;
-(NSString *)defaultUserName;
-(void)setDefaultUserName:(NSString *)arg1 ;
-(BOOL)shouldRememberPasswordInKeychain;
-(void)setShouldRememberPasswordInKeychain:(BOOL)arg1 ;
-(id)principalPreferencesWithPrincipal:(id)arg1 ;
-(id)createEnvironmentWithRealm:(id)arg1 ;
-(void)cleanupOnMemoryWarning;
@end
