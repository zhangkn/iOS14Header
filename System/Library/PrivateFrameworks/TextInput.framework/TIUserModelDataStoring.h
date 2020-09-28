/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol TIUserModelDataStoring <NSObject>
@property (readonly) BOOL isValid; 
@property (readonly) int propertiesVersion; 
@property (readonly) int durableVersion; 
@property (readonly) int transientVersion; 
@property (readonly) NSDate * propertiesLastMigrationDate; 
@property (readonly) NSDate * durableLastMigrationDate; 
@property (readonly) NSDate * transientLastMigrationDate; 
@required
-(BOOL)purgeDataForKeyPrefix:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(NSDate *)transientLastMigrationDate;
-(NSDate *)propertiesLastMigrationDate;
-(id)getAllKnownInputModes;
-(id)getInputModesForKey:(id)arg1;
-(BOOL)addValue:(id)arg1 andSecondaryValue:(id)arg2 andRealValue:(id)arg3 andProperties:(id)arg4 forKey:(id)arg5 forInputMode:(id)arg6 forDate:(id)arg7;
-(id)getAllKnownInputModesSinceDate:(id)arg1;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(int)durableVersion;
-(int)propertiesVersion;
-(id)getAllValuesForKeyPrefix:(id)arg1 forInputMode:(id)arg2 sinceDate:(id)arg3;
-(NSDate *)durableLastMigrationDate;
-(id)getDurableValueForKey:(id)arg1;
-(BOOL)purgeDataForKey:(id)arg1 forInputMode:(id)arg2 beforeDate:(id)arg3;
-(int)transientVersion;
-(BOOL)updateDurableValue:(id)arg1 forKey:(id)arg2 forDate:(id)arg3;
-(BOOL)isValid;
-(id)getAllValuesForKey:(id)arg1 forInputMode:(id)arg2 fromDate:(id)arg3 toDate:(id)arg4;

@end
