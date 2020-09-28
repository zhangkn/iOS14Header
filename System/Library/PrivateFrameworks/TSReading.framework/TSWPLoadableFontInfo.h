/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class NSString;

@interface TSWPLoadableFontInfo : NSObject {

	NSString* _groupUID;
	NSString* _fontPath;
	NSString* _fontName;
	NSString* _fontFamily;
	CGFontRef _cgFont;
	unsigned char _attemptedLoad;
	BOOL _obfuscated;

}

@property (nonatomic,copy) NSString * groupUID;                //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy) NSString * fontPath;                //@synthesize fontPath=_fontPath - In the implementation block
@property (nonatomic,copy) NSString * fontName;                //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * fontFamily;              //@synthesize fontFamily=_fontFamily - In the implementation block
@property (assign,nonatomic) CGFontRef cgFont;                 //@synthesize cgFont=_cgFont - In the implementation block
@property (assign,nonatomic) BOOL obfuscated;                  //@synthesize obfuscated=_obfuscated - In the implementation block
-(NSString *)fontName;
-(void)dealloc;
-(void)setFontName:(NSString *)arg1 ;
-(CGFontRef)cgFont;
-(NSString *)groupUID;
-(BOOL)isEqual:(id)arg1 ;
-(void)setGroupUID:(NSString *)arg1 ;
-(id)description;
-(BOOL)obfuscated;
-(void)setObfuscated:(BOOL)arg1 ;
-(NSString *)fontFamily;
-(void)setFontFamily:(NSString *)arg1 ;
-(void)setCgFont:(CGFontRef)arg1 ;
-(NSString *)fontPath;
-(void)setFontPath:(NSString *)arg1 ;
@end
