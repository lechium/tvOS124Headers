/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR1;

typedef struct {
	unsigned thumbnailsHeight : 1;
	unsigned thumbnailsWidth : 1;
} SCD_Struct_MR2;

typedef struct {
	unsigned artworkHeight : 1;
	unsigned artworkWidth : 1;
	unsigned cachingPolicy : 1;
	unsigned length : 1;
	unsigned location : 1;
	unsigned includeInfo : 1;
	unsigned includeLanguageOptions : 1;
	unsigned includeLyrics : 1;
	unsigned includeMetadata : 1;
	unsigned includeSections : 1;
	unsigned isLegacyNowPlayingInfoRequest : 1;
	unsigned returnContentItemAssetsInUserCompletion : 1;
} SCD_Struct_MR3;

typedef struct {
	unsigned controllerID : 1;
} SCD_Struct_MR4;

typedef struct PairingSessionPrivate* PairingSessionPrivateRef;

typedef struct {
	unsigned destinationAppProcessID : 1;
	unsigned command : 1;
	unsigned originUID : 1;
} SCD_Struct_MR6;

typedef struct {
	unsigned duration : 1;
	unsigned elapsedTime : 1;
	unsigned elapsedTimeTimestamp : 1;
	unsigned iTunesStoreAlbumIdentifier : 1;
	unsigned iTunesStoreArtistIdentifier : 1;
	unsigned iTunesStoreIdentifier : 1;
	unsigned iTunesStoreSubscriptionIdentifier : 1;
	unsigned inferredTimestamp : 1;
	unsigned legacyUniqueIdentifier : 1;
	unsigned radioStationIdentifier : 1;
	unsigned releaseDate : 1;
	unsigned startTime : 1;
	unsigned artworkDataHeightDeprecated : 1;
	unsigned artworkDataWidthDeprecated : 1;
	unsigned chapterCount : 1;
	unsigned defaultPlaybackRate : 1;
	unsigned discNumber : 1;
	unsigned downloadProgress : 1;
	unsigned downloadState : 1;
	unsigned editingStyleFlags : 1;
	unsigned episodeNumber : 1;
	unsigned episodeType : 1;
	unsigned mediaSubType : 1;
	unsigned mediaType : 1;
	unsigned numberOfSections : 1;
	unsigned playCount : 1;
	unsigned playbackProgress : 1;
	unsigned playbackRate : 1;
	unsigned playlistType : 1;
	unsigned radioStationType : 1;
	unsigned seasonNumber : 1;
	unsigned totalDiscCount : 1;
	unsigned totalTrackCount : 1;
	unsigned trackNumber : 1;
	unsigned artworkAvailable : 1;
	unsigned infoAvailable : 1;
	unsigned isAlwaysLive : 1;
	unsigned isContainer : 1;
	unsigned isCurrentlyPlaying : 1;
	unsigned isExplicitItem : 1;
	unsigned isInWishList : 1;
	unsigned isLiked : 1;
	unsigned isLoading : 1;
	unsigned isPlayable : 1;
	unsigned isSharable : 1;
	unsigned isSteerable : 1;
	unsigned isStreamingContent : 1;
	unsigned languageOptionsAvailable : 1;
	unsigned lyricsAvailable : 1;
} SCD_Struct_MR7;

typedef struct {
	int list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR8;

typedef struct {
	/*function pointer*/void* field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
	/*function pointer*/void* field7;
	/*function pointer*/void* field8;
	/*function pointer*/void* field9;
	void field10;
} SCD_Struct_MR9;

typedef struct {
	void field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
	/*function pointer*/void* field6;
	/*function pointer*/void* field7;
	/*function pointer*/void* field8;
} SCD_Struct_MR10;

typedef struct {
	void field1;
	/*function pointer*/void* field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
} SCD_Struct_MR11;

typedef struct {
	void field1;
	id field2;
	/*function pointer*/void* field3;
} SCD_Struct_MR12;

typedef struct {
	void field1;
	/*function pointer*/void* field2;
} SCD_Struct_MR13;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_MR14;

typedef struct {
	unsigned state : 1;
	unsigned status : 1;
	unsigned isRetrying : 1;
	unsigned isUsingSystemPairing : 1;
} SCD_Struct_MR15;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct {
	unsigned artworkUpdates : 1;
	unsigned keyboardUpdates : 1;
	unsigned nowPlayingUpdates : 1;
	unsigned outputDeviceUpdates : 1;
	unsigned volumeUpdates : 1;
} SCD_Struct_MR17;

typedef struct {
	void context;
	/*function pointer*/void* showSetupCode_f;
	/*function pointer*/void* hideSetupCode_f;
	/*function pointer*/void* promptForSetupCode_f;
	/*function pointer*/void* copyIdentity_f;
	/*function pointer*/void* findPeer_f;
	/*function pointer*/void* savePeer_f;
	/*function pointer*/void* resumeRequest_f;
	/*function pointer*/void* resumeResponse_f;
} SCD_Struct_MR18;

typedef struct {
	double timestamp;
	double sampleRate;
} SCD_Struct_MR19;

typedef struct {
	float list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR20;

typedef struct {
	unsigned canScrub : 1;
	unsigned command : 1;
	unsigned maximumRating : 1;
	unsigned minimumRating : 1;
	unsigned numAvailableSkips : 1;
	unsigned preferredPlaybackRate : 1;
	unsigned presentationStyle : 1;
	unsigned repeatMode : 1;
	unsigned shuffleMode : 1;
	unsigned skipFrequency : 1;
	unsigned skipInterval : 1;
	unsigned upNextItemCount : 1;
	unsigned active : 1;
	unsigned enabled : 1;
	unsigned supportsSharedQueue : 1;
} SCD_Struct_MR21;

typedef struct {
	unsigned batteryLevel : 1;
	unsigned deviceSubType : 1;
	unsigned deviceType : 1;
	unsigned volume : 1;
	unsigned volumeCapabilities : 1;
	unsigned canAccessAppleMusic : 1;
	unsigned canAccessRemoteAssets : 1;
	unsigned canAccessiCloudMusicLibrary : 1;
	unsigned canFetchMediaDataFromSender : 1;
	unsigned canPlayEncryptedProgressiveDownloadAssets : 1;
	unsigned canRelayCommunicationChannel : 1;
	unsigned groupContainsGroupLeader : 1;
	unsigned isAddedToHomeKit : 1;
	unsigned isAirPlayReceiverSessionActive : 1;
	unsigned isDeviceGroupable : 1;
	unsigned isGroupLeader : 1;
	unsigned isGroupable : 1;
	unsigned isLocalDevice : 1;
	unsigned isProxyGroupPlayer : 1;
	unsigned isRemoteControllable : 1;
	unsigned isVolumeControlAvailable : 1;
	unsigned parentGroupContainsDiscoverableLeader : 1;
	unsigned presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets : 1;
	unsigned requiresAuthorization : 1;
	unsigned shouldForceRemoteControlabillity : 1;
	unsigned supportsBufferedAirPlay : 1;
	unsigned supportsExternalScreen : 1;
} SCD_Struct_MR22;

typedef struct {
	unsigned playbackPosition : 1;
	unsigned radioStationID : 1;
	unsigned trackID : 1;
	unsigned playbackQueueDestinationOffset : 1;
	unsigned playbackQueueInsertionPosition : 1;
	unsigned playbackQueueOffset : 1;
	unsigned playbackRate : 1;
	unsigned rating : 1;
	unsigned repeatMode : 1;
	unsigned replaceIntent : 1;
	unsigned sendOptions : 1;
	unsigned shuffleMode : 1;
	unsigned skipInterval : 1;
	unsigned externalPlayerCommand : 1;
	unsigned negative : 1;
	unsigned requestDefermentToPlaybackQueuePosition : 1;
	unsigned shouldBeginRadioPlayback : 1;
	unsigned shouldOverrideManuallyCuratedQueue : 1;
} SCD_Struct_MR23;

typedef struct {
	unsigned long long list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR24;

typedef struct {
	unsigned validTextRangeLength : 1;
	unsigned validTextRangeLocation : 1;
	unsigned autocapitalizationType : 1;
	unsigned keyboardType : 1;
	unsigned returnKeyType : 1;
	unsigned autocorrection : 1;
	unsigned enablesReturnKeyAutomatically : 1;
	unsigned secureTextEntry : 1;
	unsigned spellchecking : 1;
} SCD_Struct_MR25;

typedef struct {
	float field1[4];
} SCD_Struct_MR26;

typedef struct {
	unsigned list;
	unsigned long long count;
	unsigned long long size;
} SCD_Struct_MR27;

typedef struct {
	float width;
	float height;
} SCD_Struct_MR28;

typedef union MRHIDSize {
	SCD_Struct_MR28 field1;
	float data[2];
} MRHIDSize;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_MR30;

typedef struct MRTextInputTraits {
	unsigned autocapitalizationType;
	unsigned autocorrectionType;
	unsigned spellcheckingType;
	unsigned keyboardType;
	unsigned returnKeyType;
	SCD_Struct_MR30 validTextRange;
	BOOL enablesReturnKeyAutomatically;
	BOOL secureTextEntry;
	long long PINEntrySeparatorIndexes[10];
	unsigned long long PINEntrySeparatorIndexesCount;
} MRTextInputTraits;

