/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSArrayChange.h>

@interface NSConcreteArrayChange : NSArrayChange {

	unsigned long long _changeType;
	unsigned long long _sourceIndex;
	unsigned long long _destinationIndex;
	id _value;

}
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(void)dealloc;
-(unsigned long long)sourceIndex;
-(unsigned long long)changeType;
-(unsigned long long)destinationIndex;
-(id)value;
@end
