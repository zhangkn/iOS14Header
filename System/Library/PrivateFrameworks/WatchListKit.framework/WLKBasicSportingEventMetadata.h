/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicSportingEventMetadata : WLKBasicContentMetadata {

	NSDate* _startGameTime;
	NSString* _leagueName;
	NSString* _leagueShortName;

}

@property (nonatomic,copy,readonly) NSDate * startGameTime;                  //@synthesize startGameTime=_startGameTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * leagueName;                   //@synthesize leagueName=_leagueName - In the implementation block
@property (nonatomic,copy,readonly) NSString * leagueShortName;              //@synthesize leagueShortName=_leagueShortName - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)startGameTime;
-(NSString *)leagueName;
-(NSString *)leagueShortName;
@end

