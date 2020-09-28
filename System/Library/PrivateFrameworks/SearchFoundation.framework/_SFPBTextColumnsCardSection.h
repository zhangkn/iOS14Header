/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTextColumnsCardSection.h>
@class NSArray, NSString, _SFPBColor, NSData;


@protocol _SFPBTextColumnsCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) unsigned titleWeight; 
@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(NSString *)title;
-(_SFPBColor *)backgroundColor;
-(void)setColumns:(id)arg1;
-(unsigned long long)columnsCount;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(unsigned)titleWeight;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(void)setTitleWeight:(unsigned)arg1;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSString *)type;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;
-(void)addColumns:(id)arg1;
-(void)clearColumns;
-(id)columnsAtIndex:(unsigned long long)arg1;
-(void)setType:(id)arg1;
-(NSArray *)columns;
-(NSArray *)punchoutOptions;
-(id)initWithDictionary:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, NSData;

@interface _SFPBTextColumnsCardSection : PBCodable <_SFPBTextColumnsCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	int _separatorStyle;
	unsigned _titleWeight;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSString* _title;
	NSArray* _columns;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                         //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                    //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;              //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                              //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                           //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                              //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned titleWeight;                            //@synthesize titleWeight=_titleWeight - In the implementation block
@property (nonatomic,copy) NSArray * columns;                                 //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFacade:(id)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)title;
-(_SFPBColor *)backgroundColor;
-(void)setColumns:(NSArray *)arg1 ;
-(unsigned long long)columnsCount;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(unsigned)titleWeight;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(void)setTitleWeight:(unsigned)arg1 ;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSString *)type;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)addColumns:(id)arg1 ;
-(void)clearColumns;
-(id)columnsAtIndex:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSArray *)columns;
-(NSArray *)punchoutOptions;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
@end
