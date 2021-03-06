/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INAppendToNoteIntentExport.h>

@class INNote, INNoteContent, NSString;

@interface INAppendToNoteIntent : INIntent <INAppendToNoteIntentExport>

@property (nonatomic,copy,readonly) INNote * targetNote; 
@property (nonatomic,copy,readonly) INNoteContent * content; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(INNote *)targetNote;
-(void)setTargetNote:(INNote *)arg1 ;
-(INNoteContent *)content;
-(void)setVerb:(id)arg1 ;
-(void)setContent:(INNoteContent *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(id)initWithTargetNote:(id)arg1 content:(id)arg2 ;
-(void)setDomain:(id)arg1 ;
@end

