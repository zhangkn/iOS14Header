/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoQueueDiff.h>
@class NSOrderedSet;


@protocol SVVideoQueueDiff <NSObject>
@property (nonatomic,readonly) NSOrderedSet * videosToInsert; 
@property (nonatomic,readonly) NSOrderedSet * videosToRemove; 
@required
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;

@end


@class NSOrderedSet, NSString;

@interface SVVideoQueueDiff : NSObject <SVVideoQueueDiff> {

	NSOrderedSet* _videosToInsert;
	NSOrderedSet* _videosToRemove;

}

@property (nonatomic,readonly) NSOrderedSet * videosToInsert;              //@synthesize videosToInsert=_videosToInsert - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * videosToRemove;              //@synthesize videosToRemove=_videosToRemove - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVideosToInsert:(id)arg1 videosToRemove:(id)arg2 ;
-(NSOrderedSet *)videosToInsert;
-(NSOrderedSet *)videosToRemove;
@end

