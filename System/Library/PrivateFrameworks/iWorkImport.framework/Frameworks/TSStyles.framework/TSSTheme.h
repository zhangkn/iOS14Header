/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSStyles.framework/TSStyles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSStyles/TSStyles-Structs.h>
#import <TSReading/TSPObject.h>
#import <TSStyles/TSKModel.h>

@class NSString, TSSStylesheet, NSMutableDictionary;

@interface TSSTheme : TSPObject <TSKModel> {

	NSString* mThemeIdentifier;
	TSSStylesheet* mStylesheet;
	NSMutableDictionary* mPresetsByKind;

}

@property (nonatomic,readonly) TSSStylesheet * stylesheet; 
@property (assign,nonatomic) BOOL isLocked; 
@property (nonatomic,retain) NSString * themeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)registerPresetSourceClass:(Class)arg1 ;
+(id)presetSources;
+(id)presetBootstrapOrder;
+(id)themeWithContext:(id)arg1 alternate:(int)arg2 ;
+(void)registerPresetSourceClasses;
-(BOOL)isLocked;
-(id)colors;
-(NSString *)themeIdentifier;
-(void)dealloc;
-(id)childEnumerator;
-(BOOL)isEqual:(id)arg1 ;
-(void)setThemeIdentifier:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(TSSStylesheet *)stylesheet;
-(id)modelPathComponentForChild:(id)arg1 ;
-(void)bootstrapThemeAlternate:(int)arg1 ;
-(void)disablePresetValidation;
-(void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)presetsOfKind:(id)arg1 ;
-(id)presetOfKind:(id)arg1 index:(unsigned long long)arg2 ;
-(void)setPresets:(id)arg1 ofKind:(id)arg2 ;
-(unsigned long long)indexOfPreset:(id)arg1 ;
-(id)p_identifierForBootstrapTheme:(int)arg1 ;
-(BOOL)hasPresetsOfKind:(id)arg1 ;
-(void)enablePresetValidation;
-(void)addPreset:(id)arg1 ofKind:(id)arg2 ;
-(void)removePreset:(id)arg1 ;
-(void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(BOOL)containsCGColor:(CGColorRef)arg1 ;
-(void)checkThemeStylesheetConsistency;
@end
