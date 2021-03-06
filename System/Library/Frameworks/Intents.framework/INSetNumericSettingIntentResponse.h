/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INSetNumericSettingIntentResponseExport.h>

@class INNumericSettingValue, NSString;

@interface INSetNumericSettingIntentResponse : INIntentResponse <INSetNumericSettingIntentResponseExport>

@property (nonatomic,copy) INNumericSettingValue * previousValue; 
@property (nonatomic,copy) INNumericSettingValue * currentValue; 
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNumericSettingValue * oldValue; 
@property (nonatomic,copy) INNumericSettingValue * updatedValue; 
@property (nonatomic,copy) INNumericSettingValue * minValue; 
@property (nonatomic,copy) INNumericSettingValue * maxValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setMaxValue:(INNumericSettingValue *)arg1 ;
-(long long)code;
-(INNumericSettingValue *)currentValue;
-(INNumericSettingValue *)updatedValue;
-(NSString *)errorDetail;
-(void)setUpdatedValue:(INNumericSettingValue *)arg1 ;
-(void)setErrorDetail:(NSString *)arg1 ;
-(void)setCurrentValue:(INNumericSettingValue *)arg1 ;
-(void)setPreviousValue:(INNumericSettingValue *)arg1 ;
-(INNumericSettingValue *)maxValue;
-(INNumericSettingValue *)minValue;
-(id)init;
-(INNumericSettingValue *)oldValue;
-(void)setMinValue:(INNumericSettingValue *)arg1 ;
-(id)propertiesByName;
-(id)initWithCoder:(id)arg1 ;
-(void)setOldValue:(INNumericSettingValue *)arg1 ;
-(long long)_codeWithName:(id)arg1 ;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(void)setPropertiesByName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(INNumericSettingValue *)previousValue;
@end

