/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICRandomNumberGenerator : NSObject {

	unsigned _randomSeed;

}
-(double)randomFloat;
-(id)randomObject:(id)arg1 ;
-(id)initWithSeed:(unsigned)arg1 ;
-(unsigned long long)randomIndexMin:(unsigned long long)arg1 max:(unsigned long long)arg2 ;
@end

