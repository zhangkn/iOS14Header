/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoControlsTimingConfiguration.h>

@protocol SVVideoControlsTimingConfiguration <NFCopying>
@property (nonatomic,readonly) double upNextAppearanceTimeInterval; 
@property (nonatomic,readonly) double nowPlayingVisibilityTimeInterval; 
@property (nonatomic,readonly) double moreFromVisibilityTimeInterval; 
@required
-(double)upNextAppearanceTimeInterval;
-(double)nowPlayingVisibilityTimeInterval;
-(double)moreFromVisibilityTimeInterval;

@end


@interface SVVideoControlsTimingConfiguration : NSObject <SVVideoControlsTimingConfiguration> {

	double _upNextAppearanceTimeInterval;
	double _nowPlayingVisibilityTimeInterval;
	double _moreFromVisibilityTimeInterval;

}

@property (nonatomic,readonly) double upNextAppearanceTimeInterval;                  //@synthesize upNextAppearanceTimeInterval=_upNextAppearanceTimeInterval - In the implementation block
@property (nonatomic,readonly) double nowPlayingVisibilityTimeInterval;              //@synthesize nowPlayingVisibilityTimeInterval=_nowPlayingVisibilityTimeInterval - In the implementation block
@property (nonatomic,readonly) double moreFromVisibilityTimeInterval;                //@synthesize moreFromVisibilityTimeInterval=_moreFromVisibilityTimeInterval - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)upNextAppearanceTimeInterval;
-(double)nowPlayingVisibilityTimeInterval;
-(double)moreFromVisibilityTimeInterval;
-(id)initWithUpNextAppearanceTimeInterval:(double)arg1 nowPlayingVisibilityTimeInterval:(double)arg2 moreFromVisibilityTimeInterval:(double)arg3 ;
@end

