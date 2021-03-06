/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SiriCore/SiriCore-Structs.h>
@interface SiriCoreSQLiteStatement : NSObject {

	sqlite3_stmtRef _impl;
	BOOL _finalizeWhenDone;

}
-(void)dealloc;
-(void)clearBindings;
-(void)reset;
-(sqlite3_stmtRef)impl;
-(id)initWithImpl:(sqlite3_stmtRef)arg1 finalizeWhenDone:(BOOL)arg2 ;
@end

