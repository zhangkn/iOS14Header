/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACCAuthContext.h>

@class NSString;

@interface ACMAuthContext : ACCAuthContext {

	NSString* _userPreferences;

}

@property (retain) NSString * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)dealloc;
-(NSString *)userPreferences;
-(void)setUserPreferences:(NSString *)arg1 ;
-(id)parametersDictionary;
-(BOOL)isDevicePwnd;
@end

