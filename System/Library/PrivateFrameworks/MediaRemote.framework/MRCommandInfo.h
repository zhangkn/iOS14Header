/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, _MRCommandInfoProtobuf, NSData;

@interface MRCommandInfo : NSObject {

	BOOL _enabled;
	unsigned _command;
	NSDictionary* _options;

}

@property (nonatomic,readonly) _MRCommandInfoProtobuf * protobuf; 
@property (assign,nonatomic) unsigned command;                                            //@synthesize command=_command - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSData * propertyListData; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(id)commandInfosFromData:(id)arg1 ;
+(BOOL)isCommandActuallySupportedEvenWhenDisabled:(unsigned)arg1 ;
+(id)dataFromCommandInfos:(id)arg1 ;
-(_MRCommandInfoProtobuf *)protobuf;
-(NSData *)propertyListData;
-(NSData *)data;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)isEnabled;
-(NSDictionary *)options;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)hash;
-(void)setEnabled:(BOOL)arg1 ;
-(unsigned)command;
-(id)description;
-(void)setCommand:(unsigned)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end
