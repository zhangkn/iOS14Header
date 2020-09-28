/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject {

	BOOL _writeOK;
	NSString* _action;
	NSString* _arguments;
	NSString* _metadata;
	NSString* _recordKey;
	NSString* _databasePath;
	_DPStorage* _storage;

}

@property (nonatomic,readonly) _DPStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * action;                    //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * arguments;                 //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) BOOL writeOK;                              //@synthesize writeOK=_writeOK - In the implementation block
+(id)supportedCommands;
+(id)supportedMetadataKeys;
+(id)command:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(BOOL)arg6 ;
-(NSString *)databasePath;
-(_DPStorage *)storage;
-(NSString *)arguments;
-(NSString *)metadata;
-(NSString *)action;
-(id)init;
-(BOOL)writeOK;
-(NSString *)recordKey;
-(BOOL)listKeys;
-(id)description;
-(id)initWithAction:(id)arg1 arguments:(id)arg2 metadata:(id)arg3 recordKey:(id)arg4 databasePath:(id)arg5 writeOK:(BOOL)arg6 ;
-(BOOL)recordNumbers:(id)arg1 forKey:(id)arg2 ;
-(BOOL)recordBitValues:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)recordStrings:(id)arg1 metadata:(id)arg2 forKey:(id)arg3 ;
-(BOOL)recordWords:(id)arg1 forKey:(id)arg2 ;
-(id)queryForKey:(id)arg1 ;
-(BOOL)submitRecordsForKey:(id)arg1 ;
-(BOOL)listReportsFor:(id)arg1 ;
-(BOOL)executeCommand;
@end
