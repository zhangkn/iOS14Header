/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityKnowledgeVector;

@interface PFUbiquityBaselineHeuristics : NSObject {

	NSString* _localPeerID;
	NSString* _storeName;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _modelVersionHash;
	long long _numRequiredTransactions;
	long long _storeSize;
	long long _logSize;
	D _logToStoreSizeRatio;
	long long _minLogBytes;
	PFUbiquityKnowledgeVector* _currentBaselineKV;
	PFUbiquityKnowledgeVector* _currentKV;

}

@property (nonatomic,readonly) NSString * localPeerID;                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                     //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;                //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;                              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (assign,nonatomic) long long numRequiredTransactions;                          //@synthesize numRequiredTransactions=_numRequiredTransactions - In the implementation block
@property (nonatomic,readonly) long long storeSize;                                      //@synthesize storeSize=_storeSize - In the implementation block
@property (nonatomic,readonly) long long logSize;                                        //@synthesize logSize=_logSize - In the implementation block
@property (assign,nonatomic) D logToStoreSizeRatio;                                      //@synthesize logToStoreSizeRatio=_logToStoreSizeRatio - In the implementation block
@property (assign,nonatomic) long long minLogBytes;                                      //@synthesize minLogBytes=_minLogBytes - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentBaselineKV;              //@synthesize currentBaselineKV=_currentBaselineKV - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKV;                      //@synthesize currentKV=_currentKV - In the implementation block
-(NSString *)localPeerID;
-(long long)storeSize;
-(long long)logSize;
-(void)dealloc;
-(id)copy;
-(void)setStoreSize:(long long)arg1 ;
-(id)init;
-(NSString *)storeName;
-(PFUbiquityKnowledgeVector *)currentKV;
-(void)setLogSize:(long long)arg1 ;
-(long long)minLogBytes;
-(void)setCurrentKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setMinLogBytes:(long long)arg1 ;
-(void)setCurrentBaselineKV:(PFUbiquityKnowledgeVector *)arg1 ;
-(void)setNumRequiredTransactions:(long long)arg1 ;
-(long long)bytesForFileAtPath:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setLogToStoreSizeRatio:(D)arg1 ;
-(NSString *)modelVersionHash;
-(BOOL)haveEnoughTransactionsToRoll;
-(BOOL)logsConsumeEnoughDiskSpace;
-(void)updateHeuristics;
-(BOOL)canRollBaseline:(id*)arg1 ;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(long long)numRequiredTransactions;
-(D)logToStoreSizeRatio;
-(PFUbiquityKnowledgeVector *)currentBaselineKV;
-(id)description;
@end

