/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPMediaQuerySection : NSObject <NSSecureCoding, NSCopying> {

	NSString* _title;
	unsigned long long _sectionIndexTitleIndex;
	NSRange _range;

}

@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) NSRange range;                                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long sectionIndexTitleIndex;              //@synthesize sectionIndexTitleIndex=_sectionIndexTitleIndex - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(id)_init;
-(id)init;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)sectionIndexTitleIndex;
-(void)setSectionIndexTitleIndex:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
@end
