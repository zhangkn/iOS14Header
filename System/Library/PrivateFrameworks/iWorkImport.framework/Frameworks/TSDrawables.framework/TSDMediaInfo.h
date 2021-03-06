/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDStyledInfo.h>

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo {

	CGSize mOriginalSize;
	struct {
		unsigned isPlaceholder : 1;
		unsigned wasMediaReplaced : 1;
	}  mFlags;

}

@property (assign,nonatomic) CGSize originalSize; 
@property (nonatomic,readonly) CGSize defaultOriginalSize; 
@property (assign,nonatomic) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL wasMediaReplaced; 
@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) NSString * mediaDisplayName; 
@property (nonatomic,readonly) NSString * mediaFileType; 
@property (nonatomic,readonly) CGSize rawDataSize; 
-(CGSize)originalSize;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(void)setOriginalSize:(CGSize)arg1 ;
-(BOOL)isPlaceholder;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(NSString *)mediaFileType;
-(void)setGeometry:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(CGSize)defaultOriginalSize;
-(NSString *)mediaDisplayName;
-(CGSize)rawDataSize;
-(CGPoint)centerForReplacingWithNewMedia;
-(void)updateGeometryToReplaceMediaInfo:(id)arg1 ;
-(BOOL)wasMediaReplaced;
-(void)setWasMediaReplaced:(BOOL)arg1 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg1 ;
@end

