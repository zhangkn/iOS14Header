/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying> {

	NSString* _genre;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(id)magazineGenreWithGenre:(id)arg1 localizedDescription:(id)arg2 ;
-(id)initWithConfigDictionary:(id)arg1 ;
-(NSString *)localizedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)genre;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithGenre:(id)arg1 localizedDescription:(id)arg2 ;
@end

