/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol PQLEnumeration;
@class BRCPCSChainInfo, PQLResultSet;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {

	BRCPCSChainInfo* _chainInfo;
	PQLResultSet*<PQLEnumeration> _enumerator;

}
-(id)nextObject;
-(void)dealloc;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
-(id)chainInfo;
@end
