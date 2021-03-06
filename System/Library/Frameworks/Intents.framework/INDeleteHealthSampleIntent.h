/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INDeleteHealthSampleIntentExport.h>

@class NSArray, NSString;

@interface INDeleteHealthSampleIntent : INIntent <INDeleteHealthSampleIntentExport>

@property (nonatomic,copy,readonly) NSArray * sampleUuids; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setSampleUuids:(NSArray *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithSampleUuids:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(NSArray *)sampleUuids;
-(void)setDomain:(id)arg1 ;
@end

