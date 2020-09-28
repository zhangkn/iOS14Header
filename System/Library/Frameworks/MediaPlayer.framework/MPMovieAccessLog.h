/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemAccessLog, NSData, NSArray;

@interface MPMovieAccessLog : NSObject <NSCopying> {

	AVPlayerItemAccessLog* _accessLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)_initWithAVItemAccessLog:(id)arg1 ;
@end
