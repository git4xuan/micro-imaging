/**
 * struct v4l2_format - stream data format
 * @type:    type of the data stream
 * @pix:    definition of an image format
 * @pix_mp:    definition of a multiplanar image format
 * @win:    definition of an overlaid image
 * @vbi:    raw VBI capture or output parameters
 * @sliced:    sliced VBI capture or output parameters
 * @raw_data:    placeholder for future extensions and custom formats
 */
struct v4l2_format {
    union {
        struct v4l2_pix_format        pix;     /* V4L2_BUF_TYPE_VIDEO_CAPTURE */
        struct v4l2_pix_format_mplane    pix_mp;  /* V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE */
        struct v4l2_window        win;     /* V4L2_BUF_TYPE_VIDEO_OVERLAY */
        struct v4l2_vbi_format        vbi;     /* V4L2_BUF_TYPE_VBI_CAPTURE */
        struct v4l2_sliced_vbi_format    sliced;  /* V4L2_BUF_TYPE_SLICED_VBI_CAPTURE */
        __u8    raw_data[200];                   /* user-defined */
    } fmt;
};
