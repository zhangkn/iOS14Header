/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, MPIdentifierSet, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {

	BOOL _libraryContent;
	NSDictionary* _dictionary;
	MPIdentifierSet* _identifiers;
	NSString* _itemKind;
	NSString* _itemID;

}

@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemKind;                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (getter=isLibraryContent,nonatomic,readonly) BOOL libraryContent;              //@synthesize libraryContent=_libraryContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                           //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(MPIdentifierSet *)identifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemID;
-(NSString *)itemKind;
-(BOOL)isLibraryContent;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)description;
@end

