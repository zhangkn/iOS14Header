/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MSVLyricsElement.h>

@class NSString, NSArray;

@interface MSVLyricsSection : MSVLyricsElement {

	long long _songPart;
	NSString* _songPartText;
	NSArray* _lines;

}

@property (assign,nonatomic) long long songPart;                 //@synthesize songPart=_songPart - In the implementation block
@property (nonatomic,copy) NSString * songPartText;              //@synthesize songPartText=_songPartText - In the implementation block
@property (nonatomic,retain) NSArray * lines;                    //@synthesize lines=_lines - In the implementation block
+(long long)_songPartForText:(id)arg1 ;
-(void)setSongPartText:(NSString *)arg1 ;
-(NSString *)songPartText;
-(void)setSongPart:(long long)arg1 ;
-(NSArray *)lines;
-(id)init;
-(long long)songPart;
-(void)setLines:(NSArray *)arg1 ;
-(id)description;
@end
