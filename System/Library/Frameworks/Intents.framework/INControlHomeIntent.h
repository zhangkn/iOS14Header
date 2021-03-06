/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INControlHomeIntentExport.h>

@class INHomeUserTask, NSArray, INDateComponentsRange, NSString;

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic,copy,readonly) INHomeUserTask * userTask; 
@property (nonatomic,copy,readonly) NSArray * filters; 
@property (nonatomic,copy,readonly) INDateComponentsRange * time; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContents:(NSArray *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)verb;
-(id)_dictionaryRepresentation;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(NSArray *)contents;
-(id)_metadata;
-(void)setTime:(INDateComponentsRange *)arg1 ;
-(BOOL)_hasTitle;
-(void)setUserTask:(INHomeUserTask *)arg1 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3 ;
-(id)initWithUserTask:(id)arg1 filters:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)initWithContents:(id)arg1 ;
-(INHomeUserTask *)userTask;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDomain:(id)arg1 ;
@end

