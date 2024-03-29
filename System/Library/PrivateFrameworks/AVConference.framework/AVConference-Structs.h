/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FFTMeter, <VCTextFrameReceiver>;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaqueRTCReporting* opaqueRTCReportingRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned maxMediaBitrate : 1;
	unsigned maxNetworkBitrate : 1;
	unsigned maxPacketsPerSecond : 1;
	unsigned metadata : 1;
	unsigned repairedMaxNetworkBitrate : 1;
	unsigned repairedStreamID : 1;
} SCD_Struct_VC3;

typedef struct opaqueVCAudioBufferList* opaqueVCAudioBufferListRef;

typedef struct AudioEventQueue_t* AudioEventQueue_tRef;

typedef struct VCAudioIOControllerIOState {
	BOOL timestampInitialized;
	double lastHostTime;
	unsigned lastInputTimestamp;
	unsigned lastInputSampleCount;
	double lastBlockSize;
	unsigned long long lastTimestamp;
} VCAudioIOControllerIOState;

typedef struct opaqueVCAudioLimiter* opaqueVCAudioLimiterRef;

typedef struct AVCRateControlConfig {
	unsigned mode;
	unsigned localRadioAccessTechnology;
	unsigned remoteRadioAccessTechnology;
	unsigned maxBitrate;
	unsigned minBitrate;
} AVCRateControlConfig;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	double field6;
	double field7;
	double field8;
	double field9;
	char field10[64];
} SCD_Struct_AV10;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
} SCD_Struct_AV11;

typedef struct {
	double field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned long long field7;
} SCD_Struct_AV12;

typedef struct {
	unsigned field1;
	BOOL field2;
	BOOL field3;
	BOOL field4;
	unsigned field5;
	unsigned field6;
	double field7;
	unsigned field8;
} SCD_Struct_AV13;

typedef struct {
	unsigned char field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned field10;
	double field11;
	double field12;
	double field13;
	unsigned field14;
	unsigned field15;
	unsigned field16;
} SCD_Struct_AV14;

typedef struct {
	unsigned field1;
	unsigned field2;
	double field3;
} SCD_Struct_AV15;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	double field4;
} SCD_Struct_AV16;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
} SCD_Struct_AV17;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	BOOL field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
} SCD_Struct_AV18;

typedef struct {
	int field1;
	double( field2;
	/*function pointer*/void* field3;
	= field4;
	AVCRateControlConfig field5;
	SCD_Struct_AV10 field6;
	SCD_Struct_AV11 field7;
	SCD_Struct_AV12 field8;
	SCD_Struct_AV13 field9;
	SCD_Struct_AV14 field10;
	SCD_Struct_AV15 field11;
	SCD_Struct_AV16 field12;
	SCD_Struct_AV17 field13;
	SCD_Struct_AV18) field14;
} SCD_Struct_AV19;

typedef struct {
	unsigned isFinal : 1;
	unsigned isLocal : 1;
} SCD_Struct_VC20;

typedef struct VCRange {
	float min;
	float max;
} VCRange;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct opaque_pthread_rwlock_t {
	long long __sig;
	char __opaque[192];
} opaque_pthread_rwlock_t;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct {
	int field1;
	unsigned char field2[12];
} SCD_Struct_GK25;

typedef struct PacketThread_s* PacketThread_sRef;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	char __opaque[40];
} opaque_pthread_cond_t;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct OWRDList {
	double time[100];
	double owrd[100];
	int frontIndex;
	int rearIndex;
	int size;
} OWRDList;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_VC34;

typedef struct VCRateControlAlgorithmConfig {
	unsigned tierBitrates;
	int initialTierIndex;
	int maxTierIndex;
	int minTierIndex;
	int lowestNonEmergencyTierIndex;
	int lowestEffectiveBWETierIndex;
	int lowestTierIndexReactToNoServerActivity;
	int rampUpTierNumber;
	int rampDownTierNumber;
	int rampUpAdditionalTierAtInitial;
	int rampDownAdditionalTierAtInitial;
	double rampDownNOWRDThreshold;
	double rampDownNOWRDAccThreshold;
	double rampDownAggressiveNOWRDThreshold;
	double rampDownAggressiveNOWRDAccThreshold;
	double rampDownConstantOWRDDuration;
	double rampDownOvershootDuration;
	double rampDownOvershootNextTierRatio;
	double rampUpFrozenDuration;
	double rampUpSettleDuration;
	double rampUpOWRDThreshold;
	double rampUpNOWRDThreshold;
	double rampUpNOWRDAccThreshold;
	double rampUpOverBandwidthCalmDuration;
	int rampUpOverBandwidthTierNumber;
	int rampDownLossEventThreshold;
	double rampUpFrozenPLRThreshold;
	double rampUpRateLimitedRatio;
	double unstableRateLimitedDuration;
	double congestionWaitDuration;
	double owrdWindowDuration;
	double owrdShortWindowDuration;
	double minimumNOWRDTimeDifference;
	double owrdInitialRampUpReadyDuration;
	unsigned owrdHistorySize;
	unsigned owrdMininumHistorySize;
	unsigned fastRampDownBitrateRange;
	unsigned fastRampUpBitrateRange;
	BOOL receivedBandwidthEstimationEnabled;
	BOOL basebandAdaptationEnabled;
	BOOL rateLimitedEnabled;
	int stabilizationScheme;
	double rampDownNBDCDThreshold;
	double rampDownAggressiveNBDCDThreshold;
	double rampDownNormalizedQueuingDelayThreshold;
	double rampDownMediumQueuingDelayThreshold;
	double rampDownHighQueuingDelayThreshold;
	double rampDownEmergencyTierCoolDownTime;
	double rampUpNBDCDThreshold;
	double rampUpQueuingDelayThreshold;
	double rampUpNBDCDCoolDownTime;
	double rampUpAudioFractionCoolDownTime;
	double autoResumeDurationAfterPaused;
	BOOL oscillationDetectionEnabled;
	double oscillationCoolDownTime;
	int oscillationDeviationTierNumber;
	int oscillationDeviationCountThreshold;
} VCRateControlAlgorithmConfig;

typedef struct {
	double time[100];
	double owrd[100];
	int frontIndex;
	int rearIndex;
	unsigned size;
} SCD_Struct_VC36;

typedef struct in_addr {
	unsigned s_addr;
} in_addr;

typedef struct sockaddr_in {
	unsigned char sin_len;
	unsigned char sin_family;
	unsigned short sin_port;
	in_addr sin_addr;
	char sin_zero[8];
} sockaddr_in;

typedef struct {
	unsigned audioUnitModel : 1;
} SCD_Struct_VC39;

typedef struct {
	unsigned long long Length;
	char* Data;
} SCD_Struct_VC40;

typedef struct tagSRTPTransformPolicy {
	int cipherMode;
	int masterKeyLength;
	int sessionKeyLength;
	int sessionSaltLength;
	int authenticationMode;
	int sessionAuthenticationKeyLength;
	int sessionAuthenticationTagLength;
} tagSRTPTransformPolicy;

typedef struct tagSRTPCryptContext {
	SCD_Struct_VC40 secAsn1Key;
	_CCCryptor ccCryptorRef;
	unsigned char ccContext[404];
} tagSRTPCryptContext;

typedef struct tagSRTPINFO {
	int fSRTPInitialized;
	int fCancelled;
	opaque_pthread_mutex_t xWait;
	opaque_pthread_cond_t cWait;
	unsigned dwSSRC;
	unsigned dwRTPROC;
	unsigned short wFirstRTPSeq;
	unsigned short wHighestRTPSeq;
	unsigned dwFirstRTCPSeq;
	unsigned dwHighestRTCPSeq;
	unsigned long long SRTPIndex;
	int masterKeyLength;
	int sessionKeyLength;
	unsigned char MasterKey[32];
	unsigned char MasterSalt[14];
	unsigned char SessionKey[32];
	unsigned char SessionSalt[14];
	unsigned char SessionAuthenticationKey[20];
	opaque_pthread_mutex_t MKIAccess;
	void masterKeyIndex;
	void masterKeyIndexInPacket;
	unsigned SRTCPIndex;
	unsigned dwDerivationRate;
	tagSRTPCryptContext cryptContext;
	tagSRTPTransformPolicy policy;
	unsigned operatingMode;
} tagSRTPINFO;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct {
	/*function pointer*/void* encoderVTable;
	int type;
	tagHANDLE encoderHandle;
} SCD_Struct_VC45;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct METER_INFO {
	BOOL frequencyMeteringEnabled;
	FFTMeter* fftMeter;
} METER_INFO;

typedef struct __CFString* CFStringRef;

typedef struct {
	char field1;
	unsigned short field2;
	unsigned short field3;
	unsigned char field4;
} SCD_Struct_VC49;

typedef struct {
	unsigned short field1;
	unsigned short field2;
	unsigned short field3;
	unsigned short field4;
	unsigned short field5;
} SCD_Struct_VC50;

typedef struct {
	unsigned field1;
	unsigned long long field2;
	unsigned short field3;
	unsigned char field4;
	char field5;
	unsigned short field6[12];
	unsigned char field7;
	unsigned short field8;
	SCD_Struct_VC50 field9;
	double field10;
} SCD_Struct_VC51;

typedef struct {
	double requestTime;
	unsigned char linkID;
	unsigned short statsIdentifier;
	unsigned totalLocalMediaPacketSent;
	unsigned totalLocalMediaPacketReceived;
	unsigned totalServerStatsByteUsed;
} SCD_Struct_VC52;

typedef struct tagVCAudioRedPayload {
	int payloadType;
	char* buffer;
	int bufferLength;
	unsigned timestamp;
	BOOL isRedAudio;
	unsigned char redCount;
	unsigned char sequenceOffset;
	unsigned char priority;
} tagVCAudioRedPayload;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV54;

typedef struct {
	double field1;
	int field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
} SCD_Struct_VC55;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct OpaqueCMMemoryPool* OpaqueCMMemoryPoolRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct OpaqueVTDecompressionSession* OpaqueVTDecompressionSessionRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueFigThread* OpaqueFigThreadRef;

typedef struct VideoPacketBuffer_t* VideoPacketBuffer_tRef;

typedef struct VCSessionParticipantProminenceInfo {
	BOOL isAudioActive;
	unsigned audioActiveProbabilityThreshold;
	unsigned audioInactiveProbabilityThreshold;
	unsigned audioActiveAccumulationThreshold;
	unsigned audioInactiveAccumulationThreshold;
	unsigned audioActiveCount;
	unsigned lastProminence;
	unsigned refreshCounter;
} VCSessionParticipantProminenceInfo;

typedef struct {
	double lastReceivedPacketTimestamp;
	double lastReportTimestamp;
	double noPacketInterval;
	BOOL isConnectionPaused;
	int type;
} SCD_Struct_VC65;

typedef struct {
	int field1;
	int field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
} SCD_Struct_VC66;

typedef struct {
	unsigned long long field1;
} SCD_Struct_VC67;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigImageQueue* OpaqueFigImageQueueRef;

typedef struct VCAudioClientSettings {
	BOOL isValid;
	BOOL enableAudioPreWarming;
	int operatingMode;
	int deviceRole;
} VCAudioClientSettings;

typedef struct {
	unsigned short radioTechnology;
	unsigned char transmissionAntenna;
	unsigned short numberOfFlows;
	unsigned char flowType;
	char transmissionPower;
	unsigned queueDepth1;
	unsigned queueDepth2;
	unsigned basebandTransmissionBytes;
	unsigned lastTransmissionTimestamp;
} SCD_Struct_VC71;

typedef struct {
	unsigned char payloadType;
	unsigned short numberOfPacketDropped;
	unsigned short awDroppedSN[500];
} SCD_Struct_VC72;

typedef struct {
	unsigned short currentBitrate;
	unsigned short suggestedBitrate;
} SCD_Struct_VC73;

typedef struct {
	unsigned short transactionID;
	unsigned short totalNumDropped;
	unsigned short numberOfPayloadTypes;
	SCD_Struct_VC72 PTSpecific[6];
} SCD_Struct_VC74;

typedef struct {
	int type;
	unsigned short version;
	double arrivalTime;
	/*function pointer*/void* notes;
	SCD_Struct_VC71 report;
	SCD_Struct_VC74 dropAck;
	SCD_Struct_VC73) codecRateChange;
} SCD_Struct_VC75;

typedef struct {
	double time[15];
	double bdcd[15];
	double delay[15];
	int frontIndex;
	int rearIndex;
	unsigned size;
} SCD_Struct_VC76;

typedef struct {
	double time[15];
	unsigned transmittedBytes[15];
	int frontIndex;
	int rearIndex;
	unsigned size;
} SCD_Struct_VC77;

typedef struct {
	int field1;
	unsigned short field2;
	double( field3;
	/*function pointer*/void* field4;
	= field5;
	SCD_Struct_VC71 field6;
	SCD_Struct_VC73 field7;
	SCD_Struct_VC74) field8;
} SCD_Struct_VC78;

typedef struct tagIPPORT {
	int iFlags;
	char szIfName[16];
	/*function pointer*/void* IP;
	unsigned dwIPv4;
	unsigned char abIPv6[16];
	unsigned short wPort;
} tagIPPORT;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct SKEStateOpaque* SKEStateOpaqueRef;

typedef struct __CFData* CFDataRef;

typedef struct SSLContext* SSLContextRef;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned long long field6;
	unsigned long long field7;
	unsigned long long field8;
	unsigned long long field9;
	unsigned long long field10;
	unsigned long long field11;
	unsigned long long field12;
	unsigned long long field13;
	unsigned long long field14;
	unsigned long long field15;
	unsigned long long field16;
	unsigned long long field17;
	unsigned long long field18;
	unsigned long long field19;
	unsigned long long field20;
	unsigned long long field21;
	unsigned long long field22;
	unsigned long long field23;
	unsigned long long field24;
	unsigned long long field25;
	unsigned long long field26;
	unsigned long long field27;
	unsigned long long field28;
} SCD_Struct_VC84;

typedef struct {
	int field1;
	int field2;
	int field3;
	unsigned field4;
} SCD_Struct_VC85;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct VoiceIOFarEndVersionInfo {
	unsigned char farEndHwModel[64];
	unsigned char farEndOSVersion[64];
	unsigned farEndAUVersion;
} VoiceIOFarEndVersionInfo;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	unsigned ntpTime : 1;
	unsigned basebandCodecSampleRate : 1;
	unsigned blobVersion : 1;
	unsigned allowDynamicMaxBitrate : 1;
	unsigned allowsContentsChangeWithAspectPreservation : 1;
} SCD_Struct_VC89;

typedef struct tagVCMediaQueue* tagVCMediaQueueRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct VCTextTransmitterConfiguration {
	tagHANDLE rtpHandle;
	unsigned sampleRate;
	BOOL isRedEnabled;
	unsigned numRedundantPayloads;
	float txIntervalMin;
} VCTextTransmitterConfiguration;

typedef struct opaqueVCVoiceDetector* opaqueVCVoiceDetectorRef;

typedef struct VCAudioEndpointData {
	SoundDec_t converter;
	opaqueVCAudioBufferList converterBuffer;
	BOOL isLastHostTimeValid;
	double lastHostTime;
	unsigned lastTimestamp;
	unsigned timestampOffset;
	BOOL controllerChanged;
} VCAudioEndpointData;

typedef struct {
	unsigned queueDepth1;
	unsigned queueDepth2;
	unsigned txBitrate;
	unsigned averageBitrate;
	unsigned averageBitrateLong;
	double expectedQueuingDelay;
	double bdcd;
	double normalizedBDCD;
	double normalizedDelay;
	64c bbString;
} SCD_Struct_VC96;

typedef struct {
	unsigned sendTimestamp;
	unsigned queuingDelay;
	unsigned remoteBWEstimation;
	unsigned maxBurstyLoss;
	unsigned totalReceivedPackets;
	unsigned echoedSendTimestamp;
	unsigned owrd;
} SCD_Struct_VC97;

typedef struct {
	double packetLossPercentage;
	unsigned burstPacketLoss;
	unsigned roundTripTimeMilliseconds;
	unsigned isNetworkCongested;
	unsigned owrd;
	unsigned targetBitrate;
	unsigned long long statisticsID;
} SCD_Struct_VC98;

typedef struct {
	unsigned estimatorID;
	BOOL deregisterEstimator;
	BOOL isProbingSequence;
	BOOL isEndOfProbingSequence;
	unsigned probingSequenceID;
	unsigned messageLength;
	double arrivalTime;
	unsigned mediaTimestamp;
} SCD_Struct_VC99;

typedef struct {
	unsigned char linkID;
	unsigned sendTimestamp;
	unsigned receiveTimestamp;
	unsigned totalPacketSent;
	unsigned totalPacketReceived;
	unsigned totalByteSent;
	unsigned totalByteReceived;
	unsigned serverStatsByteUsed;
	unsigned bandwidthSample;
	unsigned bandwidthEstimation;
	double roundTripTime;
	double owrd;
	double packetLossRate;
	unsigned actualBitrate;
	unsigned serverStatsBitrate;
	unsigned expectedBitrate;
} SCD_Struct_VC100;

typedef struct {
	unsigned packetId;
	unsigned totalPacketsSent;
	double sendTimestamp;
} SCD_Struct_VC101;

typedef struct {
	unsigned packetId;
	unsigned totalPacketsReceived;
	unsigned localBurstyLoss;
	double receiveTimestamp;
} SCD_Struct_VC102;

typedef struct {
	unsigned ssrc;
	unsigned packetLossPercentage;
	unsigned lastSequenceNumber;
	unsigned roundTripTimeMilliseconds;
} SCD_Struct_VC103;

typedef struct {
	unsigned mediaEventType;
	unsigned additionalFlushCount;
	unsigned transactionID;
	unsigned audioStallBitrate;
	BOOL isKeyFrame;
	unsigned refreshFrameTimestamp;
	unsigned refreshFramePayloadType;
	unsigned refreshFramePacketCount;
} SCD_Struct_VC104;

typedef struct {
	int type;
	double arrivalTime;
	/*function pointer*/void* ;
	SCD_Struct_VC96 baseband;
	SCD_Struct_VC97 feedback;
	SCD_Struct_VC98 network;
	SCD_Struct_VC99 probing;
	SCD_Struct_VC100 serverStats;
	SCD_Struct_VC101 packetSent;
	SCD_Struct_VC102 packetReceived;
	SCD_Struct_VC103 rtcpRR;
	AVCRateControlConfig config;
	SCD_Struct_VC104) mediaEvent;
} SCD_Struct_VC105;

typedef struct {
	int field1;
	double( field2;
	/*function pointer*/void* field3;
	= field4;
	AVCRateControlConfig field5;
	SCD_Struct_AV10 field6;
	SCD_Struct_VC97 field7;
	SCD_Struct_VC98 field8;
	SCD_Struct_VC99 field9;
	SCD_Struct_VC100 field10;
	SCD_Struct_VC101 field11;
	SCD_Struct_VC102 field12;
	SCD_Struct_VC103 field13;
	SCD_Struct_VC104) field14;
} SCD_Struct_VC106;

typedef struct {
	int rtpSocket;
	int rtcpSocket;
} SCD_Struct_VC107;

typedef struct {
	tagIPPORT srcIPPORT;
	tagIPPORT srcRTPIPPort;
} SCD_Struct_VC108;

typedef struct VCMediaStreamTransportSetupInfo {
	unsigned char setupType;
	/*function pointer*/void* ;
	SCD_Struct_VC107 socketInfo;
	SCD_Struct_VC108) ipInfo;
	unsigned sourceRate;
	unsigned datagramChannelToken;
	BOOL isSessionIDValid;
} VCMediaStreamTransportSetupInfo;

typedef struct ConnectionStats {
	unsigned char totalPacketsReceived;
	unsigned char connectionStats[2];
	unsigned char currentIndex;
	double startTime;
} ConnectionStats;

typedef struct ConnectionStatsHistory {
	unsigned char latestConnectionStatsIndex;
	unsigned char totalPacketsReceived[5];
	unsigned char connectionStats[2][5];
	unsigned char connectionStatsRatio[2][5];
} ConnectionStatsHistory;

typedef struct vDSP_DFT_SetupStruct* vDSP_DFT_SetupStructRef;

typedef struct DSPSplitComplex {
	float realp;
	float imagp;
} DSPSplitComplex;

typedef struct {
	char field1[65];
	int field2;
	char field3[65];
	int field4;
	void field5;
} SCD_Struct_VC114;

typedef struct {
	tagSRTPExchangeInfo field1;
	unsigned field2;
	tagSRTPExchangeInfo field3;
	unsigned field4;
	int field5;
	int field6;
} SCD_Struct_VC115;

typedef struct {
	unsigned short field1[12];
	unsigned char field2;
	BOOL field3;
	unsigned short field4;
	unsigned char field5;
	BOOL field6;
	BOOL field7;
	unsigned long long field8;
	BOOL field9;
	BOOL field10;
	BOOL field11;
	unsigned short field12;
	SCD_Struct_VC50 field13;
	BOOL field14;
} SCD_Struct_VC116;

typedef struct tagVCTextJitterBufferConfiguration {
	unsigned sampleRate;
	<VCTextFrameReceiver>* delegate;
} tagVCTextJitterBufferConfiguration;

typedef struct JitterPreloadQueue_t* JitterPreloadQueue_tRef;

typedef struct JitterQueue_t* JitterQueue_tRef;

typedef struct tagAccessUnitHeaderInfo {
	unsigned short accessUnitCount;
	unsigned short accessUnitSize[3];
} tagAccessUnitHeaderInfo;

typedef struct _tls_record_s* tls_record_sRef;

typedef struct {
	double responseTime;
	unsigned char linkID;
	unsigned short statsIdentifier;
	unsigned short remoteTimestamp;
	unsigned short serverPacketInterval;
	unsigned short uplinkBandwidthSample;
	unsigned short totalRemoteMediaPacketSent;
	unsigned short totalRemoteMediaPacketReceived;
} SCD_Struct_VC122;

typedef struct {
	unsigned char field1;
	double field2;
	unsigned char field3[1472];
	int field4;
	int field5;
	SCD_Struct_VC116 field6;
} SCD_Struct_VC123;

typedef struct sockaddr {
	unsigned char sa_len;
	unsigned char sa_family;
	char sa_data[14];
} sockaddr;

typedef struct tagVCMediaStreamSyncTime {
	double ntpTime;
	long long sampleRate;
	unsigned rtpTimestampOfNTP;
} tagVCMediaStreamSyncTime;

typedef struct tagCONNRESULT {
	unsigned dwCallID;
	int iResultCount;
	int iRole;
	unsigned dwRemoteCallID;
	int proto;
	int bIfRelay;
	unsigned short wRelayServType;
	unsigned short wChannelNumber;
	tagIPPORT mbLocal;
	tagIPPORT mbRemote;
	tagIPPORT mbSrc;
	tagIPPORT mbDst;
	tagIPPORT mbRemoteSrc;
	tagIPPORT mbRelayExt;
	unsigned dwRTT;
	int bIfLocalCellularQoS;
	int bIfRemoteCellularQoS;
	int iLocalCellTech;
	int iRemoteCellTech;
	unsigned short wCellularMTU;
	int bIfUpgrade;
	int bIfPrimary;
	int bIfReplaceOnly;
	tagCONNRESULT next;
} tagCONNRESULT;

typedef struct sockaddr_storage {
	unsigned char ss_len;
	unsigned char ss_family;
	char __ss_pad1[6];
	long long __ss_align;
	char __ss_pad2[112];
} sockaddr_storage;

typedef struct {
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
} SCD_Struct_VC128;

typedef struct tagWRMMetricsInfo {
	BOOL bInitialized;
	tagHANDLE hRTPHandle;
	unsigned dwReportInterval;
	unsigned dwWrmTime;
	unsigned dwPlaybackCount;
	unsigned dwPlaybackCountSpeech;
	unsigned dwErasureCount;
	unsigned dwErasureSilence;
	unsigned dwTimeOfLastRRPacket;
	unsigned dwEstimatedRTTMilliSeconds;
	unsigned dwJitter;
	unsigned dwTotalPacketRecv;
	unsigned dwDTXPacketRecv;
	unsigned long long callId;
	unsigned long long nominalJitterBufferDelay;
	unsigned long long targetJitterQueueSize;
	int nFraction;
	/*function pointer*/void* reportWRMMetricsCallback;
	SCD_Struct_VC128 wrmMetricsReportingContext;
	opaque_pthread_mutex_t wrmMetricsReportingLock;
	unsigned dwInternalTSRate;
	unsigned dwPacketSent;
	unsigned isCallAudioOnly;
	unsigned bwEstimation;
	unsigned targetBitrate;
	unsigned oneWayRelativeDelay;
	unsigned adaptationPacketLossPercentage;
	unsigned isLocalCellular;
	unsigned isVideoPaused;
} tagWRMMetricsInfo;

typedef struct __IOSurfaceAccelerator* IOSurfaceAcceleratorRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

typedef struct VCStatisticsStatsHistoryElement {
	unsigned char linkID;
	double statsUpdateTime;
	unsigned statsTimestamp;
	unsigned totalPacketSent;
	unsigned totalPacketReceived;
	unsigned long long totalByteSent;
	unsigned long long totalByteReceived;
	unsigned long long totalByteServerStatsUsed;
} VCStatisticsStatsHistoryElement;

typedef struct {
	unsigned short serverTimestamp;
	unsigned short serverPacketInterval;
	unsigned short totalServerPacketReceived;
	unsigned short totalServerPacketSent;
	unsigned short uplinkBandwidthEstimate;
} SCD_Struct_VC134;

typedef struct {
	unsigned short streamIDs[12];
	unsigned char numOfStreamIDs;
	BOOL probingGroupIDIsSet;
	unsigned short probingGroupID;
	unsigned char priority;
	BOOL pktCountingFlag;
	BOOL participantIDIsSet;
	unsigned long long participantID;
	BOOL participantGenerationCounterIsSet;
	BOOL ignorePriority;
	BOOL statsIDIsSet;
	unsigned short statsID;
	SCD_Struct_VC134 statsPayload;
	BOOL isTransitionPacket;
} SCD_Struct_VC135;

typedef struct __CTServerConnection* CTServerConnectionRef;

typedef struct {
	unsigned char field1;
	double field2;
	unsigned char field3[1472];
	int field4;
	int field5;
	SCD_Struct_VC135 field6;
} SCD_Struct_VC137;

typedef struct {
	unsigned frac;
	unsigned sec;
} SCD_Struct_VC138;

typedef union tagNTP {
	unsigned long long wide;
	SCD_Struct_VC138 time;
} tagNTP;

