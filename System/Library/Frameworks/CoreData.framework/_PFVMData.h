/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSData.h>

@interface _PFVMData : NSData {

	int _cd_rc;
	unsigned long long _length;
	void* _payload;

}
+(Class)classForKeyedUnarchiver;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_tryRetain;
-(Class)classForCoder;
-(oneway void)release;
-(const void*)bytes;
-(void)dealloc;
-(unsigned long long)length;
-(unsigned long long)retainCount;
-(BOOL)_isDeallocating;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)retain;
@end
