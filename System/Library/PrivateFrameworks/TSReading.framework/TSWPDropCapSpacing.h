/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPDropCapSpacing : NSObject <NSCopying> {

	BOOL _allowSpanParagraphs;
	unsigned long long _lineCount;
	unsigned long long _elevatedLineCount;
	unsigned long long _followingLineCount;
	double _padding;
	unsigned long long _flags;
	double _maxWidthFactor;

}

@property (assign,nonatomic) unsigned long long lineCount;                       //@synthesize lineCount=_lineCount - In the implementation block
@property (assign,nonatomic) unsigned long long elevatedLineCount;               //@synthesize elevatedLineCount=_elevatedLineCount - In the implementation block
@property (assign,nonatomic) unsigned long long followingLineCount;              //@synthesize followingLineCount=_followingLineCount - In the implementation block
@property (assign,nonatomic) double padding;                                     //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL allowSpanParagraphs;                           //@synthesize allowSpanParagraphs=_allowSpanParagraphs - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                           //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) double maxWidthFactor;                              //@synthesize maxWidthFactor=_maxWidthFactor - In the implementation block
+(id)dropCapSpacingWithLineCount:(unsigned long long)arg1 elevatedLineCount:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setPadding:(double)arg1 ;
-(double)padding;
-(unsigned long long)lineCount;
-(id)init;
-(void)setLineCount:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)maxWidthFactor;
-(void)setElevatedLineCount:(unsigned long long)arg1 ;
-(void)setFollowingLineCount:(unsigned long long)arg1 ;
-(void)setAllowSpanParagraphs:(BOOL)arg1 ;
-(void)setMaxWidthFactor:(double)arg1 ;
-(BOOL)allowSpanParagraphs;
-(unsigned long long)elevatedLineCount;
-(unsigned long long)followingLineCount;
-(unsigned long long)computedFlagsWithPropertyMap:(id)arg1 ;
@end

