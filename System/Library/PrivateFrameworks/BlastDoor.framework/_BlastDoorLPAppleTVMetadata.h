/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPAppleTVMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _title;
	NSString* _subtitle;
	_BlastDoorLPImage* _artwork;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * artwork;              //@synthesize artwork=_artwork - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setArtwork:(_BlastDoorLPImage *)arg1 ;
-(NSString *)subtitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_BlastDoorLPImage *)artwork;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setTitle:(NSString *)arg1 ;
@end
