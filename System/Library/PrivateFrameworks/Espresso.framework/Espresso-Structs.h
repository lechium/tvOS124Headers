/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct {
	void plan;
	int network_index;
} SCD_Struct_Es3;

typedef struct _long {
	char* __data_;
	unsigned long long __size_;
	unsigned long long __cap_;
} long;

typedef struct {
	unsigned char __size_;
} SCD_Struct_Es5;

typedef struct _raw {
	unsigned long long __words[3];
} raw;

typedef struct _short {
	char __data_[23];
	SCD_Struct_Es5 ;
} short;

typedef struct _rep {
	/*function pointer*/void* ;
	long __l;
	short __s;
	const aw) __r;
} rep;

typedef struct _compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > {
	const ep __value_;
} compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >;

typedef struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {
	compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > __r_;
} basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _tree_end_node<std::__1::__tree_node_base<void *> *> {
	__tree_node_base<void *> __left_;
} tree_end_node<std::__1::__tree_node_base<void *> *>;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, float>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > >;

typedef struct map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, float>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, float> > > __tree_;
} map<std::__1::basic_string<char>, float, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >;

typedef struct postprocessing_settings_t {
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > network;
	int do_blend;
	float blend_alpha;
	int grayscale_i0;
	int grayscale_i1;
	float temporal_alpha;
	float gamma;
	float saturation;
	float contrast;
	float brightness;
	int color_transfer_mode;
	int width;
	int height;
	int width_fast;
	int height_fast;
	int width_capture;
	int height_capture;
	int width_miniature;
	int height_miniature;
	int width_fullscreen;
	int height_fullscreen;
	int width_hd;
	int height_hd;
	float old_frame_scale;
	float noise_strength;
	int dyn_noise;
	float noise_speed;
	float preprocessing_bias_b;
	float preprocessing_bias_g;
	float preprocessing_bias_r;
	float preprocessing_scale;
	float preprocessing_old_frame_bias_scale;
	BOOL high_quality_scaling;
} postprocessing_settings_t;

typedef struct shared_ptr<Espresso::V9Engine::v9_noise_kernel> {
	v9_noise_kernel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::V9Engine::v9_noise_kernel>;

typedef struct shared_ptr<Espresso::generic_load_constant_kernel> {
	generic_load_constant_kernel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::generic_load_constant_kernel>;

typedef struct shared_ptr<Espresso::blob<float, 1> > {
	blob<float, 1> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<float, 1> >;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_Es20;

typedef struct {
	SCD_Struct_Es20 field1;
	SCD_Struct_Es20 field2;
} SCD_Struct_Es21;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct shared_ptr<Espresso::net> {
	net __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::net>;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __value_;
} compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __begin_;
	shared_ptr<Espresso::net> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct shared_ptr<Espresso::multiple_buffer_manager<vImage_Buffer> > {
	multiple_buffer_manager<vImage_Buffer> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::multiple_buffer_manager<vImage_Buffer> >;

typedef struct __CVBuffer* CVBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct padding_params_t {
	short pad_mode;
	short fill_mode;
	float value;
	short l;
	short r;
	short t;
	short b;
} padding_params_t;

typedef struct convolution_uniforms {
	int W;
	int H;
	int Winput;
	int Hinput;
	int start_channel_low_priority_split;
	int output_row_bytes;
	int fused_relu;
	int fused_tanh;
	int has_biases;
	float leaky_relu_alpha;
	int C;
	int K;
	int Nx;
	int Ny;
	int backward_stride;
	int fused_activation_mode;
	float fused_activation_alpha;
	float fused_activation_beta;
	padding_params_t pad;
	short stride_x;
	short stride_y;
	short dilation_x;
	short dilation_y;
	unsigned short mtl_pad_l;
	unsigned short mtl_pad_t;
	int has_8bit_weights;
	int do_ncc;
	int has_batch_norm;
	int n_groups;
	int n_parallel;
	unsigned short start_channel_bottom;
	unsigned short start_channel_top;
	unsigned short total_channel_bottom;
	unsigned short total_channel_top;
	unsigned short split_K_channels_low_priority_split;
	short n_batch;
	int deconv_out_width;
	int deconv_out_height;
	int low_precision_accumulation;
	int hint_use_winograd_win_size;
} convolution_uniforms;

typedef struct shared_ptr<Espresso::blob<unsigned char, 4> > {
	blob<unsigned char, 4> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<unsigned char, 4> >;

typedef struct shared_ptr<Espresso::blob<float, 4> > {
	blob<float, 4> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<float, 4> >;

typedef struct shared_ptr<Espresso::blob<unsigned short, 4> > {
	blob<unsigned short, 4> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<unsigned short, 4> >;

typedef struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> > {
	blob<float __attribute__((ext_vector_type(2))), 1> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> >;

typedef struct inner_product_uniforms {
	unsigned nC;
	unsigned nB;
	int has_biases;
	int has_relu;
	int has_tanh;
	float tanh_alpha;
	float tanh_beta;
	int has_prelu;
	int is_lookup;
	int quantization_mode;
	int add_to_output;
	int use_raw_buffers;
	int fused_activation_mode;
	float fused_activation_alpha;
	float fused_activation_beta;
	unsigned m;
	unsigned k;
	unsigned n;
	unsigned Abytes;
	unsigned Bbytes;
	unsigned k4;
	unsigned n4;
	unsigned n8;
	unsigned n8_splitk;
	int argmax_tree_n_clusters;
	int argmax_tree_n_clusters_keep;
} inner_product_uniforms;

typedef struct shared_ptr<Espresso::blob<float, 2> > {
	blob<float, 2> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<float, 2> >;

typedef struct shared_ptr<Espresso::blob<unsigned short, 2> > {
	blob<unsigned short, 2> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<unsigned short, 2> >;

typedef struct shared_ptr<Espresso::blob<unsigned char, 2> > {
	blob<unsigned char, 2> __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::blob<unsigned char, 2> >;

typedef struct mxnetTools_recordHeader_t_ {
	unsigned magic;
	unsigned lrecord;
} mxnetTools_recordHeader_t_;

typedef struct mxnetTools_imageID_t_ {
	unsigned long long ID[2];
} mxnetTools_imageID_t_;

typedef struct mxnetTools_imageHeader_t_ {
	unsigned flag;
	float label;
	mxnetTools_imageID_t_ imageID;
} mxnetTools_imageHeader_t_;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer> > >;

typedef struct map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, vImage_Buffer> > > __tree_;
} map<std::__1::basic_string<char>, vImage_Buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, vImage_Buffer> > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer> > >;

typedef struct map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer> > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, ETDataPoint_buffer> > > __tree_;
} map<std::__1::basic_string<char>, ETDataPoint_buffer, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, ETDataPoint_buffer> > >;

typedef struct {
	void data;
	void reserved;
	unsigned long long dim[4];
	unsigned long long stride[4];
	unsigned long long width;
	unsigned long long height;
	unsigned long long channels;
	unsigned long long batch_number;
	unsigned long long sequence_length;
	unsigned long long stride_width;
	unsigned long long stride_height;
	unsigned long long stride_channels;
	unsigned long long stride_batch_number;
	unsigned long long stride_sequence_length;
	int storage_type;
} SCD_Struct_ET51;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, void *> > >;

typedef struct _tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true> > __pair3_;
} tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >;

typedef struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > > {
	tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > > __tree_;
} map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > >;

typedef struct _compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true> >;

typedef struct _compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, ETDataPoint *>, void *> > > {
	tree_end_node<std::__1::__tree_node_base<void *> *> __value_;
} compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, ETDataPoint *>, void *> > >;

typedef struct _tree<std::__1::__value_type<int, ETDataPoint *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ETDataPoint *> > > {
	__tree_end_node<std::__1::__tree_node_base<void *> *> __begin_node_;
	compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, ETDataPoint *>, void *> > > __pair1_;
	compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true> > __pair3_;
} tree<std::__1::__value_type<int, ETDataPoint *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ETDataPoint *> > >;

typedef struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > > {
	tree<std::__1::__value_type<int, ETDataPoint *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ETDataPoint *> > > __tree_;
} map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > >;

typedef struct options {
	float lr;
	float lr_decay_epoch;
	float momentum;
	float weight_decay;
	BOOL l2_regularization;
	int verbose;
} options;

typedef struct _compressed_pair<void **, std::__1::allocator<void *> > {
	void __value_;
} compressed_pair<void **, std::__1::allocator<void *> >;

typedef struct vector<void *, std::__1::allocator<void *> > {
	void __begin_;
	void __end_;
	compressed_pair<void **, std::__1::allocator<void *> > __end_cap_;
} vector<void *, std::__1::allocator<void *> >;

typedef struct _compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> > {
	__CVBuffer __value_;
} compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> >;

typedef struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> > {
	__CVBuffer __begin_;
	__CVBuffer __end_;
	compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> > __end_cap_;
} vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> >;

typedef struct _compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __value_;
} compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __begin_;
	pair<unsigned long long, unsigned long long> __end_;
	compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > __end_cap_;
} vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __value_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __value_;
} compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __begin_;
	shared_ptr<Espresso::fast_pyramid_resizer> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __value_;
} compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __begin_;
	shared_ptr<Espresso::blob<float, 3> > __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct pair<unsigned long long, unsigned long long> {
	unsigned long long first;
	unsigned long long second;
} pair<unsigned long long, unsigned long long>;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __value_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct net_strides_configuration {
	int num_layer;
	vector<int, std::__1::allocator<int> > kernel_size;
	vector<int, std::__1::allocator<int> > stride;
	vector<int, std::__1::allocator<int> > pad;
} net_strides_configuration;

typedef struct shared_ptr<Espresso::abstract_context> {
	abstract_context __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<Espresso::abstract_context>;

