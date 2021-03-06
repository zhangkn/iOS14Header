/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface ADAdServerManifestRecord : NSObject {

	BOOL _updateInProgress;
	BOOL _temporary;
	NSString* _name;
	NSURL* _URL;
	NSDictionary* _manifest;
	double _lastUpdate;

}

@property (nonatomic,copy) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL temporary;                       //@synthesize temporary=_temporary - In the implementation block
@property (assign,nonatomic) double lastUpdate;                    //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSDictionary * manifest;              //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) BOOL updateInProgress;                //@synthesize updateInProgress=_updateInProgress - In the implementation block
-(void)setManifest:(NSDictionary *)arg1 ;
-(void)setTemporary:(BOOL)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)manifest;
-(void)setName:(NSString *)arg1 ;
-(double)lastUpdate;
-(BOOL)temporary;
-(void)setLastUpdate:(double)arg1 ;
-(NSString *)name;
-(void)setUpdateInProgress:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)updateInProgress;
@end

