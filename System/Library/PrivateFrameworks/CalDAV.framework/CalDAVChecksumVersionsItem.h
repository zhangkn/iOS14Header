/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVChecksumVersionsItem : CoreDAVItem {

	NSMutableSet* _versionStringsSupported;

}
-(id)init;
-(id)copyParseRules;
-(BOOL)supportsVersion:(id)arg1 ;
-(void)addVersionSupported:(id)arg1 ;
@end
