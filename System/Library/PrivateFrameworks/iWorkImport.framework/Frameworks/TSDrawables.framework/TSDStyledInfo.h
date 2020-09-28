/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:26 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSDrawables/TSSStyleClient.h>

@class TSSStyle, TSDReflection, TSDShadow, TSDStroke, NSString;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (nonatomic,retain) TSSStyle * style; 
@property (nonatomic,copy) TSDReflection * reflection; 
@property (nonatomic,copy) TSDShadow * shadow; 
@property (nonatomic,copy) TSDStroke * stroke; 
@property (assign,nonatomic) float opacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSDShadow *)shadow;
-(TSDStroke *)stroke;
-(id)objectForProperty:(int)arg1 ;
-(void)setShadow:(TSDShadow *)arg1 ;
-(TSSStyle *)style;
-(float)opacity;
-(void)setStyle:(TSSStyle *)arg1 ;
-(void)setOpacity:(float)arg1 ;
-(void)setStroke:(TSDStroke *)arg1 ;
-(TSDReflection *)reflection;
-(void)setReflection:(TSDReflection *)arg1 ;
-(id)boxedValueForProperty:(int)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)i_setValue:(id)arg1 forProperty:(int)arg2 ;
-(Class)styleClass;
-(id)stylesForCopyStyle;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
@end
