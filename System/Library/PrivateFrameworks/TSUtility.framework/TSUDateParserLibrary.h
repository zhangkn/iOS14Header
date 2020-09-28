/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {

	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
+(id)_singletonAlloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedDateParserLibrary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)autorelease;
-(oneway void)release;
-(id)init;
-(unsigned long long)retainCount;
-(id)retain;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
@end
