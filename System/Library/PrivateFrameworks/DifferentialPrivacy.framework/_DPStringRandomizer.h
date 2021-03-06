/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DPStringRandomizer
@optional
-(id)randomizeStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;
-(id)randomizeBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3;

@required
-(id)randomizeStrings:(id)arg1 forKey:(id)arg2;
-(id)randomizeWords:(id)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(id)arg3;
-(id)randomizeBitValues:(id)arg1 forKey:(id)arg2;

@end

