/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSSortDescriptor.h>

@class NSDictionary;

@interface MPMultiSortDescriptor : NSSortDescriptor {

	NSDictionary* _relatedProperties;

}

@property (nonatomic,copy) NSDictionary * relatedProperties;              //@synthesize relatedProperties=_relatedProperties - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortDescriptorWithRelatedProperties:(id)arg1 ascending:(BOOL)arg2 ;
-(NSDictionary *)relatedProperties;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRelatedProperties:(NSDictionary *)arg1 ;
@end

