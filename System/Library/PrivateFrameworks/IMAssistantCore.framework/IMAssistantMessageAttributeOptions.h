/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMAssistantMessageAttributeOptions : NSObject {

	unsigned long long _attributes;

}

@property (nonatomic,readonly) BOOL includeRead; 
@property (nonatomic,readonly) BOOL includeUnread; 
@property (nonatomic,readonly) unsigned long long attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)optionsWithAttributes:(unsigned long long)arg1 ;
+(id)optionsWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(unsigned long long)attributes;
-(id)initWithAttributes:(unsigned long long)arg1 ;
-(id)initWithAttributes:(unsigned long long)arg1 sanitizer:(id)arg2 ;
-(BOOL)includeRead;
-(BOOL)includeUnread;
@end
